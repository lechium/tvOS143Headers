/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableDictionary, NSDictionary;

@interface SSMetricsEventLocation : NSObject {

	long long _position;
	NSString* _type;
	NSMutableDictionary* _values;

}

@property (assign,nonatomic) long long locationPosition;                        //@synthesize position=_position - In the implementation block
@property (nonatomic,copy) NSString * locationType;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * reportingDictionary; 
-(void)setLocationType:(NSString *)arg1 ;
-(NSString *)locationType;
-(void)setLocationPosition:(long long)arg1 ;
-(void)setValue:(id)arg1 forLocationKey:(id)arg2 ;
-(NSDictionary *)reportingDictionary;
-(id)valueForLocationKey:(id)arg1 ;
-(long long)locationPosition;
@end
