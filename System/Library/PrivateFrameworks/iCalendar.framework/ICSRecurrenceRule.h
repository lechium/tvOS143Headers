/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ICSWriting.h>

@class NSMutableDictionary, ICSDateValue, NSNumber, NSArray;

@interface ICSRecurrenceRule : NSObject <NSSecureCoding, ICSWriting> {

	unsigned long long _freq;
	NSMutableDictionary* _parameters;

}

@property (assign,nonatomic) unsigned long long freq; 
@property (nonatomic,retain) ICSDateValue * until; 
@property (assign,nonatomic) NSNumber * count; 
@property (assign,nonatomic) NSNumber * interval; 
@property (nonatomic,retain) NSArray * bysecond; 
@property (nonatomic,retain) NSArray * byminute; 
@property (nonatomic,retain) NSArray * byhour; 
@property (nonatomic,retain) NSArray * byday; 
@property (nonatomic,retain) NSArray * bymonthday; 
@property (nonatomic,retain) NSArray * byyearday; 
@property (nonatomic,retain) NSArray * byweekno; 
@property (nonatomic,retain) NSArray * bymonth; 
@property (nonatomic,retain) NSArray * bysetpos; 
@property (assign,nonatomic) NSNumber * wkst; 
+(BOOL)supportsSecureCoding;
+(id)recurrenceRuleFromICSCString:(const char*)arg1 withTokenizer:(id)arg2 ;
+(id)recurrenceRuleFromICSString:(id)arg1 ;
-(NSNumber *)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCount:(NSNumber *)arg1 ;
-(NSNumber *)interval;
-(void)setInterval:(NSNumber *)arg1 ;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1 ;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(id)initWithFrequency:(unsigned long long)arg1 ;
-(void)setBymonth:(NSArray *)arg1 ;
-(void)setByday:(NSArray *)arg1 ;
-(void)setUntil:(ICSDateValue *)arg1 ;
-(ICSDateValue *)until;
-(id)parameterValueForName:(id)arg1 ;
-(void)removeParameterValueForName:(id)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)setParameterValue:(id)arg1 forName:(id)arg2 ;
-(unsigned long long)freq;
-(NSArray *)bymonth;
-(NSArray *)byweekno;
-(NSArray *)bysetpos;
-(NSArray *)byyearday;
-(NSArray *)bymonthday;
-(NSArray *)byday;
-(NSArray *)byhour;
-(NSArray *)byminute;
-(NSArray *)bysecond;
-(NSNumber *)wkst;
-(void)setBymonthday:(NSArray *)arg1 ;
-(void)cleanUpForStartDate:(id)arg1 ;
-(id)occurrencesForStartDate:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 inTimeZone:(id)arg4 ;
-(void)setFreq:(unsigned long long)arg1 ;
-(void)setBysecond:(NSArray *)arg1 ;
-(void)setByminute:(NSArray *)arg1 ;
-(void)setByhour:(NSArray *)arg1 ;
-(void)setByyearday:(NSArray *)arg1 ;
-(void)setByweekno:(NSArray *)arg1 ;
-(void)setBysetpos:(NSArray *)arg1 ;
-(void)setWkst:(NSNumber *)arg1 ;
@end

