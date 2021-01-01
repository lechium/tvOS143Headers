/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface CNVCardParsedParameter : NSObject {

	NSString* _name;
	NSArray* _values;

}

@property (copy,readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * values;              //@synthesize values=_values - In the implementation block
+(id)parameterWithName:(id)arg1 values:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(NSArray *)values;
-(id)initWithName:(id)arg1 values:(id)arg2 ;
@end
