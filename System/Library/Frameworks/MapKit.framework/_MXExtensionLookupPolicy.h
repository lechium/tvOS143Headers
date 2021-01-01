/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_MXExtensionLookupPolicy.h>

@protocol _MXExtensionLookupPolicy <NSObject>
@required
-(id)extensionPredicate;

@end


@class NSPredicate, NSString;

@interface _MXExtensionLookupPolicy : NSObject <_MXExtensionLookupPolicy> {

	NSPredicate* _extensionPredicate;

}

@property (nonatomic,retain) NSPredicate * extensionPredicate;              //@synthesize extensionPredicate=_extensionPredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPredicate:(id)arg1 ;
-(NSPredicate *)extensionPredicate;
-(void)setExtensionPredicate:(NSPredicate *)arg1 ;
@end
