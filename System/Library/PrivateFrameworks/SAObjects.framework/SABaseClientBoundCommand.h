/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class NSString, NSArray, NSNumber;

@interface SABaseClientBoundCommand : SABaseCommand <SAClientBoundCommand>

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@property (nonatomic,copy) NSString * metricsContext; 
@property (nonatomic,copy) NSNumber * usefulnessScore; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)baseClientBoundCommand;
+(id)baseClientBoundCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)callbacks;
-(void)setAppId:(NSString *)arg1 ;
-(NSString *)appId;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setUsefulnessScore:(NSNumber *)arg1 ;
-(NSNumber *)usefulnessScore;
-(void)setCallbacks:(NSArray *)arg1 ;
-(NSString *)metricsContext;
-(void)setMetricsContext:(NSString *)arg1 ;
@end

