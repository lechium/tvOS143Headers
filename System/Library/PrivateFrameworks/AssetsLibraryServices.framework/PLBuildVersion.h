/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PLBuildVersion : NSObject {

	NSString* _stringRepresentation;
	long long _majorBuildNumber;
	NSString* _majorBuildLetterString;
	long long _minorBuildNumber;
	NSString* _minorBuildLetterString;

}

@property (nonatomic,copy,readonly) NSString * stringRepresentation;                //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (nonatomic,readonly) long long majorBuildNumber;                          //@synthesize majorBuildNumber=_majorBuildNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * majorBuildLetterString;              //@synthesize majorBuildLetterString=_majorBuildLetterString - In the implementation block
@property (nonatomic,readonly) long long minorBuildNumber;                          //@synthesize minorBuildNumber=_minorBuildNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * minorBuildLetterString;              //@synthesize minorBuildLetterString=_minorBuildLetterString - In the implementation block
+(id)currentBuildVersionString;
-(id)description;
-(id)initWithString:(id)arg1 ;
-(long long)majorBuildNumber;
-(NSString *)majorBuildLetterString;
-(long long)minorBuildNumber;
-(NSString *)minorBuildLetterString;
-(NSString *)stringRepresentation;
-(long long)compareBuildVersion:(id)arg1 withPrecision:(long long)arg2 ;
-(long long)compareBuildVersionString:(id)arg1 withPrecision:(long long)arg2 ;
@end

