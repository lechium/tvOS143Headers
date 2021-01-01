/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NWNetworkAgent.h>

@class NSString, NSUUID;

@interface VCNetworkAgent : NSObject <NWNetworkAgent> {

	int _assertionRefCount;
	BOOL active;
	BOOL kernelActivated;
	BOOL userActivated;
	BOOL voluntary;
	BOOL specificUseOnly;
	NSString* agentDescription;
	NSUUID* agentUUID;

}

@property (nonatomic,copy) NSString * agentDescription; 
@property (nonatomic,copy) NSUUID * agentUUID; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isKernelActivated,nonatomic) BOOL kernelActivated; 
@property (assign,getter=isUserActivated,nonatomic) BOOL userActivated; 
@property (assign,getter=isVoluntary,nonatomic) BOOL voluntary; 
@property (assign,getter=isSpecificUseOnly,nonatomic) BOOL specificUseOnly; 
@property (assign,getter=isNetworkProvider,nonatomic) BOOL networkProvider; 
@property (assign,getter=isNexusProvider,nonatomic) BOOL nexusProvider; 
@property (assign,nonatomic) BOOL supportsListenRequests; 
@property (assign,nonatomic) BOOL supportsBrowseRequests; 
@property (assign,nonatomic) BOOL supportsResolveRequests; 
@property (assign,nonatomic) BOOL requiresAssert; 
@property (assign,nonatomic) BOOL updateClientsImmediately; 
+(id)sharedInstance;
+(id)agentType;
+(id)agentDomain;
+(id)agentFromData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSUUID *)agentUUID;
-(id)copyAgentData;
-(NSString *)agentDescription;
-(void)setAgentDescription:(NSString *)arg1 ;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(BOOL)isKernelActivated;
-(void)setKernelActivated:(BOOL)arg1 ;
-(BOOL)isUserActivated;
-(void)setUserActivated:(BOOL)arg1 ;
-(BOOL)isVoluntary;
-(void)setVoluntary:(BOOL)arg1 ;
-(BOOL)isSpecificUseOnly;
-(void)setSpecificUseOnly:(BOOL)arg1 ;
-(void)addAssertion;
-(void)removeAssertion;
@end

