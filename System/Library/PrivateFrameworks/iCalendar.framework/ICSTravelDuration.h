/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iCalendar/ICSProperty.h>

@class NSString, ICSDuration;

@interface ICSTravelDuration : ICSProperty

@property (nonatomic,retain) NSString * transparency; 
@property (nonatomic,retain) ICSDuration * duration; 
-(ICSDuration *)duration;
-(void)setDuration:(ICSDuration *)arg1 ;
-(BOOL)alwaysHasParametersToSerialize;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3 ;
-(NSString *)transparency;
-(void)setTransparency:(NSString *)arg1 ;
@end

