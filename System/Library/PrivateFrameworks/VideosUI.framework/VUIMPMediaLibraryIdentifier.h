/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/VUIMediaLibraryIdentifier.h>

@class NSString;

@interface VUIMPMediaLibraryIdentifier : NSObject <VUIMediaLibraryIdentifier> {

	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

