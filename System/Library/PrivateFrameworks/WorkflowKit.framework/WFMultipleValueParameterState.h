/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@interface WFMultipleValueParameterState : WFVariableSubstitutableParameterState
+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg1 ;
+(id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)containedVariables;
-(void)finishProcessingWithContent:(id)arg1 error:(id)arg2 forParameterStateClass:(Class)arg3 valueHandler:(/*^block*/id)arg4 ;
-(id)stateByTogglingValue:(id)arg1 ;
-(id)stateByReplacingValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2 ;
-(id)stateByAppendingValue:(id)arg1 ;
-(id)stateByRemovingValueAtIndex:(unsigned long long)arg1 ;
-(id)stateByInsertingValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2 ;
@end
