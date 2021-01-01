/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PXZoomableInlineHeaderViewConfiguration : NSObject <NSCopying> {

	BOOL _swapTitleAndSubtitle;
	unsigned long long _style;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,readonly) unsigned long long style;               //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL swapTitleAndSubtitle;              //@synthesize swapTitleAndSubtitle=_swapTitleAndSubtitle - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)title;
-(unsigned long long)style;
-(NSString *)subtitle;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 swapTitleAndSubtitle:(BOOL)arg3 style:(unsigned long long)arg4 ;
-(BOOL)swapTitleAndSubtitle;
@end

