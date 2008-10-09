/*
 *	server/chat/ChatManager.cpp generated by engine3 IDL compiler 0.55
 */

#include "ChatManager.h"

#include "ChatManagerImplementation.h"

#include "room/ChatRoom.h"

#include "../zone/objects/player/Player.h"

#include "../zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

/*
 *	ChatManagerStub
 */

ChatManager::ChatManager(ZoneServer* server, int initPlayers) {
	_impl = new ChatManagerImplementation(server, initPlayers);
	_impl->_setStub(this);
}

ChatManager::ChatManager(DummyConstructorParameter* param) {
	_impl = NULL;
}

ChatManager::~ChatManager() {
}

void ChatManager::lock(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->lock(doLock);
}

void ChatManager::unlock(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->unlock(doLock);
}

void ChatManager::addPlayer(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->addPlayer(player);
}

Player* ChatManager::getPlayer(string& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(name);

		return (Player*) method.executeWithObjectReturn();
	} else
		return ((ChatManagerImplementation*) _impl)->getPlayer(name);
}

Player* ChatManager::removePlayer(string& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addAsciiParameter(name);

		return (Player*) method.executeWithObjectReturn();
	} else
		return ((ChatManagerImplementation*) _impl)->removePlayer(name);
}

void ChatManager::sendMail(const string& sendername, unicode& header, unicode& body, const string& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addAsciiParameter(sendername);
		method.addUnicodeParameter(header);
		method.addUnicodeParameter(body);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->sendMail(sendername, header, body, name);
}

void ChatManager::sendMailBody(Player* receiver, unsigned int mailid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(receiver);
		method.addUnsignedIntParameter(mailid);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->sendMailBody(receiver, mailid);
}

void ChatManager::listMail(Player* ply) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(ply);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->listMail(ply);
}

void ChatManager::deleteMail(unsigned int mailid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addUnsignedIntParameter(mailid);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->deleteMail(mailid);
}

void ChatManager::handleTellMessage(Player* player, Message* pack) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addObjectParameter(pack);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->handleTellMessage(player, pack);
}

void ChatManager::handleMessage(Player* player, Message* pack) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(player);
		method.addObjectParameter(pack);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->handleMessage(player, pack);
}

void ChatManager::handleEmote(Player* player, Message* pack) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(player);
		method.addObjectParameter(pack);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->handleEmote(player, pack);
}

void ChatManager::handleMood(Player* player, Message* pack) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(player);
		method.addObjectParameter(pack);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->handleMood(player, pack);
}

void ChatManager::sendSystemMessage(Player* player, unicode& message) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(player);
		method.addUnicodeParameter(message);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->sendSystemMessage(player, message);
}

void ChatManager::sendSystemMessage(Player* player, const string& file, const string& str, StfParameter* param) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(player);
		method.addAsciiParameter(file);
		method.addAsciiParameter(str);
		method.addObjectParameter(param);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->sendSystemMessage(player, file, str, param);
}

void ChatManager::broadcastMessage(CreatureObject* player, unicode& message, unsigned long long target, unsigned int moodid, unsigned int mood2) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addObjectParameter(player);
		method.addUnicodeParameter(message);
		method.addUnsignedLongParameter(target);
		method.addUnsignedIntParameter(moodid);
		method.addUnsignedIntParameter(mood2);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->broadcastMessage(player, message, target, moodid, mood2);
}

void ChatManager::broadcastMessage(CreatureObject* player, const string& file, const string& str, StfParameter* param, unsigned long long target, unsigned int moodid, unsigned int mood2) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addObjectParameter(player);
		method.addAsciiParameter(file);
		method.addAsciiParameter(str);
		method.addObjectParameter(param);
		method.addUnsignedLongParameter(target);
		method.addUnsignedIntParameter(moodid);
		method.addUnsignedIntParameter(mood2);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->broadcastMessage(player, file, str, param, target, moodid, mood2);
}

void ChatManager::broadcastMessage(const string& message) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addAsciiParameter(message);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->broadcastMessage(message);
}

void ChatManager::broadcastMessageRange(Player* player, const string& message, float range) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addObjectParameter(player);
		method.addAsciiParameter(message);
		method.addFloatParameter(range);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->broadcastMessageRange(player, message, range);
}

void ChatManager::handleGameCommand(Player* player, const string& command) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addObjectParameter(player);
		method.addAsciiParameter(command);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->handleGameCommand(player, command);
}

void ChatManager::initiateRooms() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->initiateRooms();
}

void ChatManager::handleChatRoomMessage(Player* player, Message* pack) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addObjectParameter(player);
		method.addObjectParameter(pack);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->handleChatRoomMessage(player, pack);
}

void ChatManager::handleGroupChat(Player* player, Message* pack) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addObjectParameter(player);
		method.addObjectParameter(pack);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->handleGroupChat(player, pack);
}

void ChatManager::handleGuildChat(Player* player, Message* pack) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addObjectParameter(player);
		method.addObjectParameter(pack);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->handleGuildChat(player, pack);
}

void ChatManager::handleCreateRoom(Player* player, Message* pack) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addObjectParameter(player);
		method.addObjectParameter(pack);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->handleCreateRoom(player, pack);
}

void ChatManager::handleChatEnterRoomById(Player* player, Message* pack) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addObjectParameter(player);
		method.addObjectParameter(pack);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->handleChatEnterRoomById(player, pack);
}

void ChatManager::handleChatDestroyRoom(Player* player, Message* pack) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addObjectParameter(player);
		method.addObjectParameter(pack);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->handleChatDestroyRoom(player, pack);
}

void ChatManager::handleChatRemoveAvatarFromRoom(Player* player, Message* pack) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addObjectParameter(player);
		method.addObjectParameter(pack);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->handleChatRemoveAvatarFromRoom(player, pack);
}

ChatRoom* ChatManager::getChatRoom(unsigned int id) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addUnsignedIntParameter(id);

		return (ChatRoom*) method.executeWithObjectReturn();
	} else
		return ((ChatManagerImplementation*) _impl)->getChatRoom(id);
}

void ChatManager::addRoom(ChatRoom* channel) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addObjectParameter(channel);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->addRoom(channel);
}

void ChatManager::removeRoom(ChatRoom* channel) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);
		method.addObjectParameter(channel);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->removeRoom(channel);
}

void ChatManager::sendRoomList(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->sendRoomList(player);
}

ChatRoom* ChatManager::createGroupRoom(unsigned int groupID, Player* creator) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);
		method.addUnsignedIntParameter(groupID);
		method.addObjectParameter(creator);

		return (ChatRoom*) method.executeWithObjectReturn();
	} else
		return ((ChatManagerImplementation*) _impl)->createGroupRoom(groupID, creator);
}

void ChatManager::sendGuildChat(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->sendGuildChat(player);
}

ChatRoom* ChatManager::createRoomByFullPath(const string& path) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);
		method.addAsciiParameter(path);

		return (ChatRoom*) method.executeWithObjectReturn();
	} else
		return ((ChatManagerImplementation*) _impl)->createRoomByFullPath(path);
}

void ChatManager::destroyRoom(ChatRoom* room) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);
		method.addObjectParameter(room);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->destroyRoom(room);
}

void ChatManager::printRoomTree(ChatRoom* channel) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);
		method.addObjectParameter(channel);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->printRoomTree(channel);
}

ChatRoom* ChatManager::getChatRoomByFullPath(const string& path) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);
		method.addAsciiParameter(path);

		return (ChatRoom*) method.executeWithObjectReturn();
	} else
		return ((ChatManagerImplementation*) _impl)->getChatRoomByFullPath(path);
}

ChatRoom* ChatManager::getGameRoom(const string& game) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);
		method.addAsciiParameter(game);

		return (ChatRoom*) method.executeWithObjectReturn();
	} else
		return ((ChatManagerImplementation*) _impl)->getGameRoom(game);
}

ChatRoom* ChatManager::getChatRoomByGamePath(ChatRoom* game, const string& path) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);
		method.addObjectParameter(game);
		method.addAsciiParameter(path);

		return (ChatRoom*) method.executeWithObjectReturn();
	} else
		return ((ChatManagerImplementation*) _impl)->getChatRoomByGamePath(game, path);
}

unsigned int ChatManager::getNextRoomID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((ChatManagerImplementation*) _impl)->getNextRoomID();
}

int ChatManager::getPlayerCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);

		return method.executeWithSignedIntReturn();
	} else
		return ((ChatManagerImplementation*) _impl)->getPlayerCount();
}

bool ChatManager::isMute() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 48);

		return method.executeWithBooleanReturn();
	} else
		return ((ChatManagerImplementation*) _impl)->isMute();
}

void ChatManager::setMute(bool isMuted) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 49);
		method.addBooleanParameter(isMuted);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->setMute(isMuted);
}

/*
 *	ChatManagerAdapter
 */

ChatManagerAdapter::ChatManagerAdapter(ChatManagerImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* ChatManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		lock(inv->getBooleanParameter());
		break;
	case 7:
		unlock(inv->getBooleanParameter());
		break;
	case 8:
		addPlayer((Player*) inv->getObjectParameter());
		break;
	case 9:
		resp->insertLong(getPlayer(inv->getAsciiParameter(_param0_getPlayer__string_))->_getObjectID());
		break;
	case 10:
		resp->insertLong(removePlayer(inv->getAsciiParameter(_param0_removePlayer__string_))->_getObjectID());
		break;
	case 11:
		sendMail(inv->getAsciiParameter(_param0_sendMail__string_unicode_unicode_string_), inv->getUnicodeParameter(_param1_sendMail__string_unicode_unicode_string_), inv->getUnicodeParameter(_param2_sendMail__string_unicode_unicode_string_), inv->getAsciiParameter(_param3_sendMail__string_unicode_unicode_string_));
		break;
	case 12:
		sendMailBody((Player*) inv->getObjectParameter(), inv->getUnsignedIntParameter());
		break;
	case 13:
		listMail((Player*) inv->getObjectParameter());
		break;
	case 14:
		deleteMail(inv->getUnsignedIntParameter());
		break;
	case 15:
		handleTellMessage((Player*) inv->getObjectParameter(), (Message*) inv->getObjectParameter());
		break;
	case 16:
		handleMessage((Player*) inv->getObjectParameter(), (Message*) inv->getObjectParameter());
		break;
	case 17:
		handleEmote((Player*) inv->getObjectParameter(), (Message*) inv->getObjectParameter());
		break;
	case 18:
		handleMood((Player*) inv->getObjectParameter(), (Message*) inv->getObjectParameter());
		break;
	case 19:
		sendSystemMessage((Player*) inv->getObjectParameter(), inv->getUnicodeParameter(_param1_sendSystemMessage__Player_unicode_));
		break;
	case 20:
		sendSystemMessage((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendSystemMessage__Player_string_string_StfParameter_), inv->getAsciiParameter(_param2_sendSystemMessage__Player_string_string_StfParameter_), (StfParameter*) inv->getObjectParameter());
		break;
	case 21:
		broadcastMessage((CreatureObject*) inv->getObjectParameter(), inv->getUnicodeParameter(_param1_broadcastMessage__CreatureObject_unicode_long_int_int_), inv->getUnsignedLongParameter(), inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter());
		break;
	case 22:
		broadcastMessage((CreatureObject*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_broadcastMessage__CreatureObject_string_string_StfParameter_long_int_int_), inv->getAsciiParameter(_param2_broadcastMessage__CreatureObject_string_string_StfParameter_long_int_int_), (StfParameter*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter());
		break;
	case 23:
		broadcastMessage(inv->getAsciiParameter(_param0_broadcastMessage__string_));
		break;
	case 24:
		broadcastMessageRange((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_broadcastMessageRange__Player_string_float_), inv->getFloatParameter());
		break;
	case 25:
		handleGameCommand((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_handleGameCommand__Player_string_));
		break;
	case 26:
		initiateRooms();
		break;
	case 27:
		handleChatRoomMessage((Player*) inv->getObjectParameter(), (Message*) inv->getObjectParameter());
		break;
	case 28:
		handleGroupChat((Player*) inv->getObjectParameter(), (Message*) inv->getObjectParameter());
		break;
	case 29:
		handleGuildChat((Player*) inv->getObjectParameter(), (Message*) inv->getObjectParameter());
		break;
	case 30:
		handleCreateRoom((Player*) inv->getObjectParameter(), (Message*) inv->getObjectParameter());
		break;
	case 31:
		handleChatEnterRoomById((Player*) inv->getObjectParameter(), (Message*) inv->getObjectParameter());
		break;
	case 32:
		handleChatDestroyRoom((Player*) inv->getObjectParameter(), (Message*) inv->getObjectParameter());
		break;
	case 33:
		handleChatRemoveAvatarFromRoom((Player*) inv->getObjectParameter(), (Message*) inv->getObjectParameter());
		break;
	case 34:
		resp->insertLong(getChatRoom(inv->getUnsignedIntParameter())->_getObjectID());
		break;
	case 35:
		addRoom((ChatRoom*) inv->getObjectParameter());
		break;
	case 36:
		removeRoom((ChatRoom*) inv->getObjectParameter());
		break;
	case 37:
		sendRoomList((Player*) inv->getObjectParameter());
		break;
	case 38:
		resp->insertLong(createGroupRoom(inv->getUnsignedIntParameter(), (Player*) inv->getObjectParameter())->_getObjectID());
		break;
	case 39:
		sendGuildChat((Player*) inv->getObjectParameter());
		break;
	case 40:
		resp->insertLong(createRoomByFullPath(inv->getAsciiParameter(_param0_createRoomByFullPath__string_))->_getObjectID());
		break;
	case 41:
		destroyRoom((ChatRoom*) inv->getObjectParameter());
		break;
	case 42:
		printRoomTree((ChatRoom*) inv->getObjectParameter());
		break;
	case 43:
		resp->insertLong(getChatRoomByFullPath(inv->getAsciiParameter(_param0_getChatRoomByFullPath__string_))->_getObjectID());
		break;
	case 44:
		resp->insertLong(getGameRoom(inv->getAsciiParameter(_param0_getGameRoom__string_))->_getObjectID());
		break;
	case 45:
		resp->insertLong(getChatRoomByGamePath((ChatRoom*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_getChatRoomByGamePath__ChatRoom_string_))->_getObjectID());
		break;
	case 46:
		resp->insertInt(getNextRoomID());
		break;
	case 47:
		resp->insertSignedInt(getPlayerCount());
		break;
	case 48:
		resp->insertBoolean(isMute());
		break;
	case 49:
		setMute(inv->getBooleanParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ChatManagerAdapter::lock(bool doLock) {
	return ((ChatManagerImplementation*) impl)->lock(doLock);
}

void ChatManagerAdapter::unlock(bool doLock) {
	return ((ChatManagerImplementation*) impl)->unlock(doLock);
}

void ChatManagerAdapter::addPlayer(Player* player) {
	return ((ChatManagerImplementation*) impl)->addPlayer(player);
}

Player* ChatManagerAdapter::getPlayer(string& name) {
	return ((ChatManagerImplementation*) impl)->getPlayer(name);
}

Player* ChatManagerAdapter::removePlayer(string& name) {
	return ((ChatManagerImplementation*) impl)->removePlayer(name);
}

void ChatManagerAdapter::sendMail(const string& sendername, unicode& header, unicode& body, const string& name) {
	return ((ChatManagerImplementation*) impl)->sendMail(sendername, header, body, name);
}

void ChatManagerAdapter::sendMailBody(Player* receiver, unsigned int mailid) {
	return ((ChatManagerImplementation*) impl)->sendMailBody(receiver, mailid);
}

void ChatManagerAdapter::listMail(Player* ply) {
	return ((ChatManagerImplementation*) impl)->listMail(ply);
}

void ChatManagerAdapter::deleteMail(unsigned int mailid) {
	return ((ChatManagerImplementation*) impl)->deleteMail(mailid);
}

void ChatManagerAdapter::handleTellMessage(Player* player, Message* pack) {
	return ((ChatManagerImplementation*) impl)->handleTellMessage(player, pack);
}

void ChatManagerAdapter::handleMessage(Player* player, Message* pack) {
	return ((ChatManagerImplementation*) impl)->handleMessage(player, pack);
}

void ChatManagerAdapter::handleEmote(Player* player, Message* pack) {
	return ((ChatManagerImplementation*) impl)->handleEmote(player, pack);
}

void ChatManagerAdapter::handleMood(Player* player, Message* pack) {
	return ((ChatManagerImplementation*) impl)->handleMood(player, pack);
}

void ChatManagerAdapter::sendSystemMessage(Player* player, unicode& message) {
	return ((ChatManagerImplementation*) impl)->sendSystemMessage(player, message);
}

void ChatManagerAdapter::sendSystemMessage(Player* player, const string& file, const string& str, StfParameter* param) {
	return ((ChatManagerImplementation*) impl)->sendSystemMessage(player, file, str, param);
}

void ChatManagerAdapter::broadcastMessage(CreatureObject* player, unicode& message, unsigned long long target, unsigned int moodid, unsigned int mood2) {
	return ((ChatManagerImplementation*) impl)->broadcastMessage(player, message, target, moodid, mood2);
}

void ChatManagerAdapter::broadcastMessage(CreatureObject* player, const string& file, const string& str, StfParameter* param, unsigned long long target, unsigned int moodid, unsigned int mood2) {
	return ((ChatManagerImplementation*) impl)->broadcastMessage(player, file, str, param, target, moodid, mood2);
}

void ChatManagerAdapter::broadcastMessage(const string& message) {
	return ((ChatManagerImplementation*) impl)->broadcastMessage(message);
}

void ChatManagerAdapter::broadcastMessageRange(Player* player, const string& message, float range) {
	return ((ChatManagerImplementation*) impl)->broadcastMessageRange(player, message, range);
}

void ChatManagerAdapter::handleGameCommand(Player* player, const string& command) {
	return ((ChatManagerImplementation*) impl)->handleGameCommand(player, command);
}

void ChatManagerAdapter::initiateRooms() {
	return ((ChatManagerImplementation*) impl)->initiateRooms();
}

void ChatManagerAdapter::handleChatRoomMessage(Player* player, Message* pack) {
	return ((ChatManagerImplementation*) impl)->handleChatRoomMessage(player, pack);
}

void ChatManagerAdapter::handleGroupChat(Player* player, Message* pack) {
	return ((ChatManagerImplementation*) impl)->handleGroupChat(player, pack);
}

void ChatManagerAdapter::handleGuildChat(Player* player, Message* pack) {
	return ((ChatManagerImplementation*) impl)->handleGuildChat(player, pack);
}

void ChatManagerAdapter::handleCreateRoom(Player* player, Message* pack) {
	return ((ChatManagerImplementation*) impl)->handleCreateRoom(player, pack);
}

void ChatManagerAdapter::handleChatEnterRoomById(Player* player, Message* pack) {
	return ((ChatManagerImplementation*) impl)->handleChatEnterRoomById(player, pack);
}

void ChatManagerAdapter::handleChatDestroyRoom(Player* player, Message* pack) {
	return ((ChatManagerImplementation*) impl)->handleChatDestroyRoom(player, pack);
}

void ChatManagerAdapter::handleChatRemoveAvatarFromRoom(Player* player, Message* pack) {
	return ((ChatManagerImplementation*) impl)->handleChatRemoveAvatarFromRoom(player, pack);
}

ChatRoom* ChatManagerAdapter::getChatRoom(unsigned int id) {
	return ((ChatManagerImplementation*) impl)->getChatRoom(id);
}

void ChatManagerAdapter::addRoom(ChatRoom* channel) {
	return ((ChatManagerImplementation*) impl)->addRoom(channel);
}

void ChatManagerAdapter::removeRoom(ChatRoom* channel) {
	return ((ChatManagerImplementation*) impl)->removeRoom(channel);
}

void ChatManagerAdapter::sendRoomList(Player* player) {
	return ((ChatManagerImplementation*) impl)->sendRoomList(player);
}

ChatRoom* ChatManagerAdapter::createGroupRoom(unsigned int groupID, Player* creator) {
	return ((ChatManagerImplementation*) impl)->createGroupRoom(groupID, creator);
}

void ChatManagerAdapter::sendGuildChat(Player* player) {
	return ((ChatManagerImplementation*) impl)->sendGuildChat(player);
}

ChatRoom* ChatManagerAdapter::createRoomByFullPath(const string& path) {
	return ((ChatManagerImplementation*) impl)->createRoomByFullPath(path);
}

void ChatManagerAdapter::destroyRoom(ChatRoom* room) {
	return ((ChatManagerImplementation*) impl)->destroyRoom(room);
}

void ChatManagerAdapter::printRoomTree(ChatRoom* channel) {
	return ((ChatManagerImplementation*) impl)->printRoomTree(channel);
}

ChatRoom* ChatManagerAdapter::getChatRoomByFullPath(const string& path) {
	return ((ChatManagerImplementation*) impl)->getChatRoomByFullPath(path);
}

ChatRoom* ChatManagerAdapter::getGameRoom(const string& game) {
	return ((ChatManagerImplementation*) impl)->getGameRoom(game);
}

ChatRoom* ChatManagerAdapter::getChatRoomByGamePath(ChatRoom* game, const string& path) {
	return ((ChatManagerImplementation*) impl)->getChatRoomByGamePath(game, path);
}

unsigned int ChatManagerAdapter::getNextRoomID() {
	return ((ChatManagerImplementation*) impl)->getNextRoomID();
}

int ChatManagerAdapter::getPlayerCount() {
	return ((ChatManagerImplementation*) impl)->getPlayerCount();
}

bool ChatManagerAdapter::isMute() {
	return ((ChatManagerImplementation*) impl)->isMute();
}

void ChatManagerAdapter::setMute(bool isMuted) {
	return ((ChatManagerImplementation*) impl)->setMute(isMuted);
}

/*
 *	ChatManagerHelper
 */

ChatManagerHelper* ChatManagerHelper::staticInitializer = ChatManagerHelper::instance();

ChatManagerHelper::ChatManagerHelper() {
	className = "ChatManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ChatManagerHelper::finalizeHelper() {
	ChatManagerHelper::finalize();
}

DistributedObject* ChatManagerHelper::instantiateObject() {
	return new ChatManager(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ChatManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ChatManagerAdapter((ChatManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ChatManagerServant
 */

ChatManagerServant::ChatManagerServant() {
	_classHelper = ChatManagerHelper::instance();
}

ChatManagerServant::~ChatManagerServant() {
}

void ChatManagerServant::_setStub(DistributedObjectStub* stub) {
	_this = (ChatManager*) stub;
}

DistributedObjectStub* ChatManagerServant::_getStub() {
	return _this;
}

