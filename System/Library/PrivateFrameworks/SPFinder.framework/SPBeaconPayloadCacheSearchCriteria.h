/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SPSearchResultMarker, NSNumber;

@interface SPBeaconPayloadCacheSearchCriteria : NSObject <NSSecureCoding> {

	SPSearchResultMarker* _searchResultMarker;
	NSNumber* _fetchLimit;

}

@property (nonatomic,retain) SPSearchResultMarker * searchResultMarker;              //@synthesize searchResultMarker=_searchResultMarker - In the implementation block
@property (nonatomic,copy) NSNumber * fetchLimit;                                    //@synthesize fetchLimit=_fetchLimit - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFetchLimit:(NSNumber *)arg1 ;
-(NSNumber *)fetchLimit;
-(void)setSearchResultMarker:(SPSearchResultMarker *)arg1 ;
-(SPSearchResultMarker *)searchResultMarker;
@end
