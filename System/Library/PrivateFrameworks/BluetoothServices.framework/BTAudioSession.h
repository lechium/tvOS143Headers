/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BluetoothServices/BluetoothServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString, NSXPCListenerEndpoint;

@interface BTAudioSession : NSObject <NSSecureCoding> {

	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	LogCategory* _ucat;
	NSXPCConnection* _xpcCnx;
	BOOL _inAppRouting;
	int _audioArbitrationResult;
	int _category;
	unsigned _flags;
	int _mode;
	unsigned _clientID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	double _timeoutSeconds;
	NSXPCListenerEndpoint* _testListenerEndpoint;

}

@property (assign,nonatomic) unsigned clientID;                                         //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (assign,nonatomic) int audioArbitrationResult;                                //@synthesize audioArbitrationResult=_audioArbitrationResult - In the implementation block
@property (assign,nonatomic) int category;                                              //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                            //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                      //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) BOOL inAppRouting;                                         //@synthesize inAppRouting=_inAppRouting - In the implementation block
@property (nonatomic,copy) NSString * label;                                            //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) double timeoutSeconds;                                     //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (assign,nonatomic) int mode;                                                  //@synthesize mode=_mode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned)flags;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(int)category;
-(void)setCategory:(int)arg1 ;
-(int)mode;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)_interrupted;
-(void)setFlags:(unsigned)arg1 ;
-(double)timeoutSeconds;
-(void)setTimeoutSeconds:(double)arg1 ;
-(unsigned)clientID;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_ensureXPCStarted;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setClientID:(unsigned)arg1 ;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(void)setTestListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)_reportError:(id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(int)audioArbitrationResult;
-(void)setAudioArbitrationResult:(int)arg1 ;
-(BOOL)inAppRouting;
-(void)setInAppRouting:(BOOL)arg1 ;
@end

