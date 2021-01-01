/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKMediaEntityIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TVHKDAAPBrowseMediaEntityCollectionIdentifier : TVHKMediaEntityIdentifier <NSSecureCoding> {

	NSString* _browseTitle;

}

@property (nonatomic,copy) NSString * browseTitle;              //@synthesize browseTitle=_browseTitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithProtocol:(unsigned long long)arg1 ;
-(NSString *)browseTitle;
-(id)initWithBrowseTitle:(id)arg1 ;
-(void)setBrowseTitle:(NSString *)arg1 ;
@end

