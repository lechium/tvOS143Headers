/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface CNTimeIntervalFormatter : NSFormatter {

	NSNumberFormatter* _numberFormatterWith3SigFigs;
	NSNumberFormatter* _numberFormatterWith4SigFigs;

}

@property (nonatomic,readonly) NSNumberFormatter * numberFormatterWith3SigFigs;              //@synthesize numberFormatterWith3SigFigs=_numberFormatterWith3SigFigs - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * numberFormatterWith4SigFigs;              //@synthesize numberFormatterWith4SigFigs=_numberFormatterWith4SigFigs - In the implementation block
+(id)stringForTimeInterval:(double)arg1 ;
+(id)numberFormatterWithSignificantDigits:(unsigned long long)arg1 ;
+(id)sharedFormatter;
+(id)multiplierForOrder:(long long)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)stringForTimeInterval:(double)arg1 ;
-(NSNumberFormatter *)numberFormatterWith3SigFigs;
-(NSNumberFormatter *)numberFormatterWith4SigFigs;
@end

