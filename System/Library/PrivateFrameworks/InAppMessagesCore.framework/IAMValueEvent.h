/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <InAppMessagesCore/IAMEvent.h>

@protocol NSCopying;
@interface IAMValueEvent : IAMEvent {

	id<NSCopying> value;

}

@property (nonatomic,copy) id<NSCopying> value; 
-(id<NSCopying>)value;
-(void)setValue:(id<NSCopying>)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
@end
