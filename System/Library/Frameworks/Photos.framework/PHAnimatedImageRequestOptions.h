/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <Photos/PHImageRequestOptions.h>

@interface PHAnimatedImageRequestOptions : PHImageRequestOptions {

	BOOL _allowPreCaching;
	BOOL _useSharedImageDecoding;

}

@property (assign,nonatomic) BOOL allowPreCaching;                     //@synthesize allowPreCaching=_allowPreCaching - In the implementation block
@property (assign,nonatomic) BOOL useSharedImageDecoding;              //@synthesize useSharedImageDecoding=_useSharedImageDecoding - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)useSharedImageDecoding;
-(BOOL)allowPreCaching;
-(void)setAllowPreCaching:(BOOL)arg1 ;
-(void)setUseSharedImageDecoding:(BOOL)arg1 ;
@end

