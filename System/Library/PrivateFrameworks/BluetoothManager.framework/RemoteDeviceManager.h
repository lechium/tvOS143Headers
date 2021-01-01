/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSObject;

@interface RemoteDeviceManager : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
-(id)init;
-(void)dealloc;
-(void)disconnectDevice:(id)arg1 ;
-(void)sendMessage:(const char*)arg1 args:(id)arg2 ;
@end
