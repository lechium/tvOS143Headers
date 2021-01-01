/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFSuggestAutomationEvent : WFEvent {

	BOOL _interacted;
	BOOL _completed;
	NSString* _key;
	NSString* _suggestedAutomationIdentifier;
	NSString* _source;

}

@property (nonatomic,copy) NSString * key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * suggestedAutomationIdentifier;              //@synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL interacted;                                     //@synthesize interacted=_interacted - In the implementation block
@property (assign,nonatomic) BOOL completed;                                      //@synthesize completed=_completed - In the implementation block
@property (nonatomic,copy) NSString * source;                                     //@synthesize source=_source - In the implementation block
+(Class)codableEventClass;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setInteracted:(BOOL)arg1 ;
-(NSString *)suggestedAutomationIdentifier;
-(void)setSuggestedAutomationIdentifier:(NSString *)arg1 ;
-(BOOL)interacted;
@end

