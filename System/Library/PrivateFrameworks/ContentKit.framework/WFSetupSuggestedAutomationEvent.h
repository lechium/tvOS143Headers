/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFSetupSuggestedAutomationEvent : WFEvent {

	BOOL _completed;
	unsigned _currentStep;
	NSString* _key;
	NSString* _suggestedAutomationIdentifier;

}

@property (nonatomic,copy) NSString * key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * suggestedAutomationIdentifier;              //@synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned currentStep;                                //@synthesize currentStep=_currentStep - In the implementation block
@property (assign,nonatomic) BOOL completed;                                      //@synthesize completed=_completed - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(unsigned)currentStep;
-(NSString *)suggestedAutomationIdentifier;
-(void)setSuggestedAutomationIdentifier:(NSString *)arg1 ;
-(void)setCurrentStep:(unsigned)arg1 ;
@end

