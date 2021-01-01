/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WFConfiguredTrigger, WFWorkflowReference, WFDebouncer, NSSet;

@interface VCTriggerNotificationDebouncerItem : NSObject {

	WFConfiguredTrigger* _configuredTrigger;
	WFWorkflowReference* _reference;
	WFDebouncer* _debouncer;
	NSSet* _triggerEventIDs;

}

@property (nonatomic,readonly) WFConfiguredTrigger * configuredTrigger;              //@synthesize configuredTrigger=_configuredTrigger - In the implementation block
@property (nonatomic,readonly) WFWorkflowReference * reference;                      //@synthesize reference=_reference - In the implementation block
@property (nonatomic,readonly) WFDebouncer * debouncer;                              //@synthesize debouncer=_debouncer - In the implementation block
@property (nonatomic,retain) NSSet * triggerEventIDs;                                //@synthesize triggerEventIDs=_triggerEventIDs - In the implementation block
-(id)description;
-(WFWorkflowReference *)reference;
-(id)initWithConfiguredTrigger:(id)arg1 reference:(id)arg2 triggerEventIDs:(id)arg3 debouncer:(id)arg4 ;
-(WFConfiguredTrigger *)configuredTrigger;
-(WFDebouncer *)debouncer;
-(NSSet *)triggerEventIDs;
-(void)setTriggerEventIDs:(NSSet *)arg1 ;
@end
