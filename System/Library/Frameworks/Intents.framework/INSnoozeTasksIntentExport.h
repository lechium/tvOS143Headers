/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, INDateComponentsRange, NSNumber;


@protocol INSnoozeTasksIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * tasks; 
@property (nonatomic,copy) INDateComponentsRange * nextTriggerTime; 
@property (nonatomic,copy) NSNumber * all; 
@required
-(id)init;
-(NSArray *)tasks;
-(void)setTasks:(id)arg1;
-(INDateComponentsRange *)nextTriggerTime;
-(void)setNextTriggerTime:(id)arg1;
-(NSNumber *)all;
-(void)setAll:(id)arg1;

@end

