/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPhotoSources/TVPhotoSources-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSURL, NSDictionary, NSString;

@interface TVPhotoAsset : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSDate* _dateCreated;
	NSURL* _fullResolutionURL;
	NSDictionary* _HTTPHeaderFields;
	NSString* _assetIdentifier;
	BOOL _isTemporaryFile;

}

@property (nonatomic,readonly) BOOL hasFileURL; 
@property (nonatomic,readonly) BOOL hasExternalURL; 
@property (nonatomic,copy,readonly) NSURL * fullResolutionURL;                    //@synthesize fullResolutionURL=_fullResolutionURL - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateCreated;                         //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * HTTPHeaderFields;              //@synthesize HTTPHeaderFields=_HTTPHeaderFields - In the implementation block
@property (nonatomic,readonly) BOOL isTemporaryFile;                              //@synthesize isTemporaryFile=_isTemporaryFile - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasFileURL;
-(NSDate *)dateCreated;
-(NSDictionary *)HTTPHeaderFields;
-(NSString *)assetIdentifier;
-(NSURL *)fullResolutionURL;
-(BOOL)isTemporaryFile;
-(BOOL)hasExternalURL;
@end

