/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSDictionary;

@interface PSIParsedDate : NSObject {

	NSDictionary* _attributes;
	NSRange _range;
	NSRange _extensionRange;

}

@property (nonatomic,copy,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSRange range;                               //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSRange extensionRange;                      //@synthesize extensionRange=_extensionRange - In the implementation block
-(NSDictionary *)attributes;
-(NSRange)range;
-(NSRange)extensionRange;
-(id)initWithAttributes:(id)arg1 range:(NSRange)arg2 extensionRange:(NSRange)arg3 ;
@end

