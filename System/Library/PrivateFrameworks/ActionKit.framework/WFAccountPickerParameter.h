/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFAccountPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	Class _accountClass;
	id _observer;

}

@property (nonatomic,readonly) NSArray * possibleStates;              //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,readonly) id observer;                           //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) Class accountClass;                    //@synthesize accountClass=_accountClass - In the implementation block
-(void)dealloc;
-(BOOL)isHidden;
-(id)observer;
-(Class)accountClass;
-(id)defaultSerializedRepresentation;
-(void)possibleStatesDidChange;
-(NSArray *)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(id)accountWithName:(id)arg1 ;
@end

