/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAStartRequest.h>

@class NSString, SAConfidenceScores;

@interface SAStartMultiUserTestRequest : SAStartRequest

@property (nonatomic,copy) NSString * expectedSelectedSharedUserId; 
@property (nonatomic,retain) SAConfidenceScores * voiceIDConfidenceScores; 
+(id)startMultiUserTestRequest;
+(id)startMultiUserTestRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)expectedSelectedSharedUserId;
-(void)setExpectedSelectedSharedUserId:(NSString *)arg1 ;
-(SAConfidenceScores *)voiceIDConfidenceScores;
-(void)setVoiceIDConfidenceScores:(SAConfidenceScores *)arg1 ;
@end

