/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SARDNativeFlowContextUpdate, NSString;

@interface SARDResultCandidateSelected : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SARDNativeFlowContextUpdate * nativeFlowContextUpdate; 
@property (nonatomic,copy) NSString * selectedResultCandidateId; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resultCandidateSelected;
+(id)resultCandidateSelectedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SARDNativeFlowContextUpdate *)nativeFlowContextUpdate;
-(void)setNativeFlowContextUpdate:(SARDNativeFlowContextUpdate *)arg1 ;
-(NSString *)selectedResultCandidateId;
-(void)setSelectedResultCandidateId:(NSString *)arg1 ;
@end

