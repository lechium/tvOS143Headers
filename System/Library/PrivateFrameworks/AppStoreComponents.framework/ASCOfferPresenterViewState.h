/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASCOfferMetadata, ASCOfferTheme;

@interface ASCOfferPresenterViewState : NSObject <NSCopying> {

	ASCOfferMetadata* _metadata;
	ASCOfferTheme* _theme;

}

@property (nonatomic,copy,readonly) ASCOfferMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) ASCOfferTheme * theme;                    //@synthesize theme=_theme - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(ASCOfferMetadata *)metadata;
-(ASCOfferTheme *)theme;
-(id)initWithMetadata:(id)arg1 theme:(id)arg2 ;
@end

