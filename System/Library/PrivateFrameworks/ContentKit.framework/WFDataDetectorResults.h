/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSNumber, WFFileType;

@interface WFDataDetectorResults : NSObject {

	NSArray* _textCheckingResults;
	NSNumber* _number;
	NSArray* _dictionaries;
	WFFileType* _dictionaryType;

}

@property (nonatomic,readonly) NSArray * textCheckingResults;              //@synthesize textCheckingResults=_textCheckingResults - In the implementation block
@property (nonatomic,readonly) NSArray * URLs; 
@property (nonatomic,readonly) NSArray * streetAddresses; 
@property (nonatomic,readonly) NSArray * phoneNumbers; 
@property (nonatomic,readonly) NSArray * dates; 
@property (nonatomic,readonly) NSNumber * number;                          //@synthesize number=_number - In the implementation block
@property (nonatomic,readonly) NSArray * dictionaries;                     //@synthesize dictionaries=_dictionaries - In the implementation block
@property (nonatomic,readonly) WFFileType * dictionaryType;                //@synthesize dictionaryType=_dictionaryType - In the implementation block
-(id)init;
-(NSNumber *)number;
-(NSArray *)URLs;
-(NSArray *)phoneNumbers;
-(NSArray *)dates;
-(NSArray *)dictionaries;
-(NSArray *)textCheckingResults;
-(NSArray *)streetAddresses;
-(id)initWithTextCheckingResults:(id)arg1 number:(id)arg2 dictionaries:(id)arg3 dictionaryType:(id)arg4 ;
-(WFFileType *)dictionaryType;
@end

