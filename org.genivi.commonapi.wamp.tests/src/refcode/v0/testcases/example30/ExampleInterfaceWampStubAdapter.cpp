/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.wamp (standalone).
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/

#include "v0/testcases/example30/ExampleInterface.hpp"
#include "v0/testcases/example30/ExampleInterfaceWampStubAdapter.hpp"
#include "v0/testcases/example30/ExampleInterfaceWampStructsSupport.hpp"

#include <functional>

namespace v0 {
namespace testcases {
namespace example30 {

std::shared_ptr<CommonAPI::Wamp::WampStubAdapter> createExampleInterfaceWampStubAdapter(
						const CommonAPI::Wamp::WampAddress &_address,
						const std::shared_ptr<CommonAPI::Wamp::WampProxyConnection> &_connection,
						const std::shared_ptr<CommonAPI::StubBase> &_stub) {
	std::cout << "createExampleInterfaceWampStubAdapter called" << std::endl;
	return std::make_shared<ExampleInterfaceWampStubAdapter>(_address, _connection, _stub);
}

INITIALIZER(registerExampleInterfaceWampStubAdapter) {
	CommonAPI::Wamp::Factory::get()->registerStubAdapterCreateMethod(
		ExampleInterface::getInterface(), &createExampleInterfaceWampStubAdapter);
	std::cout << "registerStubAdapterCreateMethod(createExampleInterfaceWampStubAdapter)" << std::endl;
}

ExampleInterfaceWampStubAdapterInternal::~ExampleInterfaceWampStubAdapterInternal() {
	deactivateManagedInstances();
	ExampleInterfaceWampStubAdapterHelper::deinit();
}

void ExampleInterfaceWampStubAdapterInternal::deactivateManagedInstances() {

}

CommonAPI::Wamp::WampGetAttributeStubDispatcher<
	::v0::testcases::example30::ExampleInterfaceStub,
	CommonAPI::Version
> ExampleInterfaceWampStubAdapterInternal::getExampleInterfaceInterfaceVersionStubDispatcher(&ExampleInterfaceStub::getInterfaceVersion, "uu");


const ExampleInterfaceWampStubAdapterHelper::StubDispatcherTable& ExampleInterfaceWampStubAdapterInternal::getStubDispatcherTable() {
	return stubDispatcherTable_;
}

const CommonAPI::Wamp::StubAttributeTable& ExampleInterfaceWampStubAdapterInternal::getStubAttributeTable() {
	return stubAttributeTable_;
}

ExampleInterfaceWampStubAdapterInternal::ExampleInterfaceWampStubAdapterInternal(
		const CommonAPI::Wamp::WampAddress &_address,
		const std::shared_ptr<CommonAPI::Wamp::WampProxyConnection> &_connection,
		const std::shared_ptr<CommonAPI::StubBase> &_stub)
	: CommonAPI::Wamp::WampStubAdapter(_address, _connection, false),
	  ExampleInterfaceWampStubAdapterHelper(_address, _connection, std::dynamic_pointer_cast<ExampleInterfaceStub>(_stub), false),
	  stubDispatcherTable_({ /* TODO: is stubDispatcherTable needed at all? */ }),
		stubAttributeTable_() {
	std::cout << "ExampleInterfaceWampStubAdapterInternal constructor called" << std::endl;
	stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &/*namespace::*/ExampleInterfaceWampStubAdapterInternal::getExampleInterfaceInterfaceVersionStubDispatcher });
}


//////////////////////////////////////////////////////////////////////////////////////////

void ExampleInterfaceWampStubAdapterInternal::provideRemoteMethods() {
	std::cout << "provideRemoteMethods called" << std::endl;
}



} // namespace example30
} // namespace testcases
} // namespace v0
