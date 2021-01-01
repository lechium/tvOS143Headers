/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject {

	DMXPCConnection* _connection;
	BOOL _didReceivePid;

}

@property (nonatomic,readonly) BOOL didReceivePid; 
+(id)connection;
-(id)init;
-(void)invalidate;
-(void)resume;
-(int)pid;
-(void)handleMessage:(id)arg1 ;
-(BOOL)didReceivePid;
-(void)runPluginAtPath:(id)arg1 withParameters:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

