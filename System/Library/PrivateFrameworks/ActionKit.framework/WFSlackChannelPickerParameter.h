/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class NSArray, WFAction, NSString;

@interface WFSlackChannelPickerParameter : WFEnumerationParameter <WFActionEventObserver> {

	NSArray* _possibleStates;
	WFAction* _action;

}

@property (nonatomic,readonly) NSString * accountParameterKey; 
@property (nonatomic,readonly) NSArray * possibleStates;                    //@synthesize possibleStates=_possibleStates - In the implementation block
@property (assign,nonatomic,__weak) WFAction * action;                      //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(BOOL)isHidden;
-(id)account;
-(id)defaultSerializedRepresentation;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)possibleStatesDidChange;
-(NSArray *)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(NSString *)accountParameterKey;
-(void)updateSlackChannels;
-(id)identifierForChannelWithName:(id)arg1 ;
@end
