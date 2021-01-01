/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXTileIdentifierConverter.h>

@class NSArray, NSString;

@interface PXComposedTileIdentifierConverter : NSObject <PXTileIdentifierConverter> {

	NSArray* _converters;

}

@property (nonatomic,copy,readonly) NSArray * converters;              //@synthesize converters=_converters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)reverseTransformTileIdentifier:(PXTileIdentifier*)arg1 ;
-(BOOL)transformTileIdentifier:(PXTileIdentifier*)arg1 group:(unsigned long long*)arg2 ;
-(id)initWithTileIdentifierConverters:(id)arg1 ;
-(NSArray *)converters;
@end

