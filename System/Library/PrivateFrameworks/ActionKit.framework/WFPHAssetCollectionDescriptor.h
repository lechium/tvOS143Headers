/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFPHAssetCollectionDescriptor : MTLModel <NSSecureCoding> {

	NSString* _localIdentifier;
	NSString* _localizedTitle;

}

@property (nonatomic,copy,readonly) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;               //@synthesize localizedTitle=_localizedTitle - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1 ;
-(NSString *)localizedTitle;
-(NSString *)localIdentifier;
-(id)initWithLocalIdentifier:(id)arg1 localizedTitle:(id)arg2 ;
@end
