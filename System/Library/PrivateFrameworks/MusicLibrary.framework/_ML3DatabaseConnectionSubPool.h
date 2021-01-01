/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSMutableSet, NSString;

@interface _ML3DatabaseConnectionSubPool : NSObject {

	NSObject*<OS_dispatch_queue> _checkoutQueue;
	NSObject*<OS_dispatch_queue> _checkinQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_semaphore> _waitingSemaphore;
	NSMutableSet* _availableConnections;
	NSMutableSet* _busyConnections;
	int _connectionsProfilingLevel;
	int _willDeleteDatabaseNotifyToken;
	int _homeSharingCachesClearedNotifyToken;
	BOOL _useReadOnlyConnections;
	BOOL _useDistantConnections;
	NSString* _databasePath;
	unsigned long long _maxConcurrentConnections;
	unsigned long long _connectionsJournalingMode;

}

@property (nonatomic,readonly) NSString * databasePath;                                  //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) unsigned long long maxConcurrentConnections;              //@synthesize maxConcurrentConnections=_maxConcurrentConnections - In the implementation block
@property (assign,nonatomic) BOOL useReadOnlyConnections;                                //@synthesize useReadOnlyConnections=_useReadOnlyConnections - In the implementation block
@property (assign,nonatomic) BOOL useDistantConnections;                                 //@synthesize useDistantConnections=_useDistantConnections - In the implementation block
@property (assign,nonatomic) unsigned long long connectionsJournalingMode;               //@synthesize connectionsJournalingMode=_connectionsJournalingMode - In the implementation block
@property (assign,nonatomic) int connectionsProfilingLevel; 
-(id)init;
-(void)dealloc;
-(NSString *)databasePath;
-(void)checkInConnection:(id)arg1 ;
-(void)setConnectionsProfilingLevel:(int)arg1 ;
-(id)initWithDatabasePath:(id)arg1 maxConcurrentConnections:(unsigned long long)arg2 ;
-(void)setUseReadOnlyConnections:(BOOL)arg1 ;
-(void)setUseDistantConnections:(BOOL)arg1 ;
-(void)setConnectionsJournalingMode:(unsigned long long)arg1 ;
-(void)closeConnectionsAndWaitForBusyConnections:(BOOL)arg1 ;
-(id)checkoutConnection:(BOOL*)arg1 ;
-(void)handleDiagnostic:(id)arg1 ;
-(int)connectionsProfilingLevel;
-(unsigned long long)connectionsJournalingMode;
-(void)_handleDatabaseDeletion;
-(void)checkInConnection:(id)arg1 returnToPool:(BOOL)arg2 ;
-(unsigned long long)maxConcurrentConnections;
-(BOOL)useReadOnlyConnections;
-(BOOL)useDistantConnections;
@end

