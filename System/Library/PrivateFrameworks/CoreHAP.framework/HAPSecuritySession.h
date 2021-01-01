/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HAPEncryptedSession.h>

@protocol HMFLocking, HAPSecuritySessionDelegate, OS_dispatch_queue;
@class NSData, NSDictionary, NSObject, HAPSecuritySessionEncryption, NSString;

@interface HAPSecuritySession : HMFObject <HMFLogging, HAPEncryptedSession> {

	id<HMFLocking> _lock;
	unsigned long long _state;
	unsigned long long _resumeSessionID;
	NSData* _broadcastKey;
	NSDictionary* _additionalDerivedKeys;
	id<HAPSecuritySessionDelegate> _delegate;
	unsigned long long _role;
	NSObject*<OS_dispatch_queue> _queue;
	PairingSessionPrivateRef _pairingSession;
	HAPSecuritySessionEncryption* _encryption;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (assign) unsigned long long state;                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) PairingSessionPrivateRef pairingSession;                //@synthesize pairingSession=_pairingSession - In the implementation block
@property (nonatomic,retain) HAPSecuritySessionEncryption * encryption;              //@synthesize encryption=_encryption - In the implementation block
@property (__weak,readonly) id<HAPSecuritySessionDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long role;                              //@synthesize role=_role - In the implementation block
@property (getter=isOpen,readonly) BOOL open; 
@property (getter=isOpening,readonly) BOOL opening; 
@property (nonatomic,readonly) unsigned long long resumeSessionID;                   //@synthesize resumeSessionID=_resumeSessionID - In the implementation block
@property (readonly) NSData * broadcastKey;                                          //@synthesize broadcastKey=_broadcastKey - In the implementation block
@property (readonly) NSDictionary * additionalDerivedKeys;                           //@synthesize additionalDerivedKeys=_additionalDerivedKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)dealloc;
-(BOOL)open;
-(void)close;
-(id<HAPSecuritySessionDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isOpen;
-(id)_inputInfo;
-(unsigned long long)role;
-(HAPSecuritySessionEncryption *)encryption;
-(void)closeWithError:(id)arg1 ;
-(void)setPairingSession:(PairingSessionPrivateRef)arg1 ;
-(PairingSessionPrivateRef)pairingSession;
-(void)_closeWithError:(id)arg1 ;
-(NSData *)broadcastKey;
-(void)setBroadcastKey:(NSData *)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 resumeSessionID:(unsigned long long)arg2 delegate:(id)arg3 ;
-(void)receivedSetupExchangeData:(id)arg1 error:(id)arg2 ;
-(id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
-(id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
-(BOOL)_initializeSetupSession:(unsigned long long)arg1 ;
-(void)_notifyOpening;
-(void)_processSetupExchangeData:(id)arg1 error:(id)arg2 ;
-(void)_handleSetupExchangeComplete;
-(id)_outputInfo;
-(void)setResumeSessionID:(unsigned long long)arg1 ;
-(id)_broadcastInfo;
-(id)_handleLocalPairingIdentityRequestWithStatus:(int*)arg1 ;
-(void)setAdditionalDerivedKeys:(NSDictionary *)arg1 ;
-(void)setEncryption:(HAPSecuritySessionEncryption *)arg1 ;
-(void)_notifyOpened;
-(void)reallyOpen;
-(void)_initiateClientSessionSetupExchange;
-(NSDictionary *)additionalDerivedKeys;
-(unsigned long long)resumeSessionID;
-(BOOL)isOpening;
-(id)_handlePeerPairingIdentityRequestWithIdentifier:(id)arg1 status:(int*)arg2 ;
@end

