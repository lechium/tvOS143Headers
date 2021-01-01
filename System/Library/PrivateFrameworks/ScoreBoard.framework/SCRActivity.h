/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SCRSchedulable.h>

@class SCRSchedulingConfiguration, NSString;

@interface SCRActivity : NSObject <NSCopying, BSDescriptionProviding, SCRSchedulable> {

	SCRSchedulingConfiguration* _schedulingConfiguration;
	NSString* _identifier;
	NSString* _name;
	/*^block*/id _activationBlock;

}

@property (nonatomic,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id activationBlock;                                      //@synthesize activationBlock=_activationBlock - In the implementation block
@property (copy) SCRSchedulingConfiguration * schedulingConfiguration;              //@synthesize schedulingConfiguration=_schedulingConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(SCRSchedulingConfiguration *)schedulingConfiguration;
-(id)activationBlock;
-(void)setSchedulingConfiguration:(SCRSchedulingConfiguration *)arg1 ;
-(void)setActivationBlock:(id)arg1 ;
-(id)initWithName:(id)arg1 earliestStartDate:(id)arg2 schedulingWindow:(double)arg3 activationBlock:(/*^block*/id)arg4 ;
@end

