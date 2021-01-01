/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface ENRegionTravelerServerDownloadConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSURL* _tekTravelerDownloadBaseURL;
	NSURL* _tekTravelerDownloadIndexURL;

}

@property (nonatomic,copy,readonly) NSURL * tekTravelerDownloadBaseURL;               //@synthesize tekTravelerDownloadBaseURL=_tekTravelerDownloadBaseURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * tekTravelerDownloadIndexURL;              //@synthesize tekTravelerDownloadIndexURL=_tekTravelerDownloadIndexURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithServerResponseDictionary:(id)arg1 ;
-(NSURL *)tekTravelerDownloadBaseURL;
-(NSURL *)tekTravelerDownloadIndexURL;
@end

