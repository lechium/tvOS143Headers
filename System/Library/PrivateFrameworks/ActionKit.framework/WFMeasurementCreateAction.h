/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@interface WFMeasurementCreateAction : WFAction
-(id)currentValue;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)currentUnit;
-(void)initializeParameters;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)parametersRequiringUserInputAlongsideParameter:(id)arg1 ;
-(id)outputMeasurementUnitType;
-(id)unitParameter;
-(id)currentUnitTypeState;
@end

