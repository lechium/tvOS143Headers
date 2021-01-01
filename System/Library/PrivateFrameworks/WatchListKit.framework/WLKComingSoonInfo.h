/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WLKComingSoonInfo : NSObject {

	BOOL _comingSoon;
	NSString* _dateString;
	NSString* _dateFormat;
	unsigned long long _precision;
	NSString* _brandID;

}

@property (getter=isComingSoon,nonatomic,readonly) BOOL comingSoon;              //@synthesize comingSoon=_comingSoon - In the implementation block
@property (nonatomic,copy,readonly) NSString * dateString;                       //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,copy,readonly) NSString * dateFormat;                       //@synthesize dateFormat=_dateFormat - In the implementation block
@property (nonatomic,readonly) unsigned long long precision;                     //@synthesize precision=_precision - In the implementation block
@property (nonatomic,copy,readonly) NSString * brandID;                          //@synthesize brandID=_brandID - In the implementation block
+(id)comingSoonItemsWithDictionaries:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)dateFormat;
-(unsigned long long)precision;
-(NSString *)dateString;
-(void)_initializeDatesStrings;
-(id)initWithDictionary:(id)arg1 brandID:(id)arg2 ;
-(BOOL)isComingSoon;
-(NSString *)brandID;
@end

