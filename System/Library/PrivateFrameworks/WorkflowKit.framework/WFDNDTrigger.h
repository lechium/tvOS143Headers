/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:22:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@interface WFDNDTrigger : WFTrigger {

	BOOL _onEnable;
	BOOL _onDisable;

}

@property (assign,nonatomic) BOOL onEnable;               //@synthesize onEnable=_onEnable - In the implementation block
@property (assign,nonatomic) BOOL onDisable;              //@synthesize onDisable=_onDisable - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isUserInitiated;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(BOOL)onEnable;
-(BOOL)onDisable;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setOnEnable:(BOOL)arg1 ;
-(void)setOnDisable:(BOOL)arg1 ;
@end

