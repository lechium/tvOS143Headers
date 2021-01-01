/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class AWDServerConnection, NSObject, NSString, NSMutableDictionary;

@interface WFMetricsManager : NSObject {

	AWDServerConnection* _server;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSString* _processName;
	NSMutableDictionary* _ssidHashes;

}

@property (nonatomic,retain) AWDServerConnection * server;                          //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
@property (nonatomic,copy) NSString * processName;                                  //@synthesize processName=_processName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * ssidHashes;                      //@synthesize ssidHashes=_ssidHashes - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(AWDServerConnection *)server;
-(void)setServer:(AWDServerConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)processEvent:(id)arg1 ;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)ssidHashes;
-(id)SHAForSSID:(id)arg1 ;
-(void)setSsidHashes:(NSMutableDictionary *)arg1 ;
@end

