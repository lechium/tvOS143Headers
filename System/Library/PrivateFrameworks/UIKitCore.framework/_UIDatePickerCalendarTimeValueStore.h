/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIDatePickerCalendarTimeFormat;

@interface _UIDatePickerCalendarTimeValueStore : NSObject {

	unsigned long long* _inputBuffer;
	_UIDatePickerCalendarTimeFormat* _timeFormat;

}

@property (nonatomic,readonly) unsigned long long* inputBuffer;                           //@synthesize inputBuffer=_inputBuffer - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarTimeFormat * timeFormat;              //@synthesize timeFormat=_timeFormat - In the implementation block
@property (assign,nonatomic) unsigned long long hourValue; 
@property (assign,nonatomic) unsigned long long minuteValue; 
-(void)dealloc;
-(unsigned long long*)inputBuffer;
-(id)initWithTimeFormat:(id)arg1 ;
-(_UIDatePickerCalendarTimeFormat *)timeFormat;
-(unsigned long long)hourValue;
-(unsigned long long)minuteValue;
-(unsigned long long)digitsInScope:(long long)arg1 ;
-(void)setDigits:(unsigned long long)arg1 count:(unsigned long long)arg2 inScope:(long long)arg3 append:(BOOL)arg4 ;
-(void)setHourValue:(unsigned long long)arg1 ;
-(void)setMinuteValue:(unsigned long long)arg1 ;
-(void)removeLastDigitInScope:(long long)arg1 ;
-(unsigned long long)__integerInBufferWithRange:(NSRange)arg1 ;
-(void)__setIntegerInBuffer:(unsigned long long)arg1 range:(NSRange)arg2 ;
-(void)_setDigits:(unsigned long long)arg1 count:(unsigned long long)arg2 inRange:(NSRange)arg3 append:(BOOL)arg4 ;
-(void)_verifyInputWithScope:(long long)arg1 ;
-(void)_removeLastDigitInRange:(NSRange)arg1 ;
@end

