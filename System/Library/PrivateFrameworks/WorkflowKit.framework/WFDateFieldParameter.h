/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFTextInputParameter.h>
#import <libobjc.A.dylib/WFParameterDialogProvider.h>

@class NSDateFormatter, NSString;

@interface WFDateFieldParameter : WFTextInputParameter <WFParameterDialogProvider> {

	BOOL _detectsAllDayDates;
	BOOL _displaysAllDayString;
	BOOL _forcesAllDayDates;
	NSDateFormatter* _hintDateFormatter;
	NSString* _reactiveParameterKey;
	NSString* _hintDateMode;

}

@property (nonatomic,readonly) NSDateFormatter * hintDateFormatter;                   //@synthesize hintDateFormatter=_hintDateFormatter - In the implementation block
@property (nonatomic,readonly) NSString * hintDateMode;                               //@synthesize hintDateMode=_hintDateMode - In the implementation block
@property (nonatomic,readonly) NSString * reactiveParameterKey;                       //@synthesize reactiveParameterKey=_reactiveParameterKey - In the implementation block
@property (nonatomic,readonly) NSString * localizedIncompleteHintString; 
@property (nonatomic,readonly) BOOL timeOnlyMode; 
@property (nonatomic,readonly) BOOL dateOnlyMode; 
@property (nonatomic,readonly) BOOL detectsAllDayDates;                               //@synthesize detectsAllDayDates=_detectsAllDayDates - In the implementation block
@property (nonatomic,readonly) BOOL displaysAllDayString;                             //@synthesize displaysAllDayString=_displaysAllDayString - In the implementation block
@property (assign,nonatomic) BOOL forcesAllDayDates;                                  //@synthesize forcesAllDayDates=_forcesAllDayDates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDefinition:(id)arg1 ;
-(void)setForcesAllDayDates:(BOOL)arg1 ;
-(id)datePickerConfiguration;
-(NSString *)localizedIncompleteHintString;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)parameterStateFromDialogResponse:(id)arg1 ;
-(BOOL)timeOnlyMode;
-(BOOL)dateOnlyMode;
-(NSDateFormatter *)hintDateFormatter;
-(id)hintForState:(id)arg1 ;
-(id)dateFormatterForConfiguration:(id)arg1 ;
-(id)createDialogTextFieldConfigurationWithDefaultState:(id)arg1 ;
-(NSString *)reactiveParameterKey;
-(BOOL)detectsAllDayDates;
-(BOOL)displaysAllDayString;
-(BOOL)forcesAllDayDates;
-(NSString *)hintDateMode;
@end

