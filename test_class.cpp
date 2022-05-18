#include <test_class.h>
#include <testlib.h>

mainClass::mainClass()
{
    TestLib* testLibObj = new TestLib();
    testClass* thread = new testClass();
    connect(thread, &testClass::sendPing, testLibObj, &TestLib::getPing);
    connect(testLibObj, &TestLib::sendPong, thread, &testClass::getPong);
    thread->start();
}

void testClass::run()
{
    qDebug() << "thread run";
    while (true)
    {
    }
}
