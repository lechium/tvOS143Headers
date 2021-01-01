/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSearchServices/TVSearchServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface TVSSPlaybackActionOperationResult : NSObject <NSCopying, NSSecureCoding> {

	NSString* _appBundleID;
	NSURL* _playbackURL;

}

@property (nonatomic,copy,readonly) NSString * appBundleID;              //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * playbackURL;                 //@synthesize playbackURL=_playbackURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appBundleID;
-(NSURL *)playbackURL;
-(id)initWithAppBundleID:(id)arg1 playbackURL:(id)arg2 ;
@end

