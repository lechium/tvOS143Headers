/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AMSUIDynamicImpressionMetricsIdentifier : NSObject {

	NSString* _element;
	long long _index;
	NSString* _parent;

}

@property (nonatomic,retain) NSString * element;              //@synthesize element=_element - In the implementation block
@property (assign,nonatomic) long long index;                 //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSString * parent;               //@synthesize parent=_parent - In the implementation block
-(NSString *)element;
-(long long)index;
-(NSString *)parent;
-(void)setIndex:(long long)arg1 ;
-(void)setParent:(NSString *)arg1 ;
-(void)setElement:(NSString *)arg1 ;
-(id)initWithParent:(id)arg1 element:(id)arg2 index:(long long)arg3 ;
@end

