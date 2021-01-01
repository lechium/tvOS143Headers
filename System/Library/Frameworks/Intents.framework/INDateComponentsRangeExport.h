/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDateComponents, INRecurrenceRule;


@protocol INDateComponentsRangeExport <NSObject,JSExport>
@property (nonatomic,copy) NSDateComponents * startDateComponents; 
@property (nonatomic,copy) NSDateComponents * endDateComponents; 
@property (nonatomic,copy) INRecurrenceRule * recurrenceRule; 
@required
-(id)init;
-(NSDateComponents *)startDateComponents;
-(void)setStartDateComponents:(id)arg1;
-(NSDateComponents *)endDateComponents;
-(void)setEndDateComponents:(id)arg1;
-(INRecurrenceRule *)recurrenceRule;
-(void)setRecurrenceRule:(id)arg1;

@end
