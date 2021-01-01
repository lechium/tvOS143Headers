/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoVision/PhotoVision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PVObject : NSObject <NSCopying> {

	NSString* _localIdentifier;

}

@property (nonatomic,copy,readonly) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)localIdentifier;
-(id)initWithLocalIdentifier:(id)arg1 ;
@end
