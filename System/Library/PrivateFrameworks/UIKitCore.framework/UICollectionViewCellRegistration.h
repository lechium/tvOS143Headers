/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UINib;

@interface UICollectionViewCellRegistration : NSObject {

	NSString* _reuseIdentifier;
	Class _cellClass;
	UINib* _cellNib;
	/*^block*/id _configurationHandler;

}

@property (nonatomic,readonly) Class cellClass;                      //@synthesize cellClass=_cellClass - In the implementation block
@property (nonatomic,readonly) UINib * cellNib;                      //@synthesize cellNib=_cellNib - In the implementation block
@property (nonatomic,readonly) id configurationHandler;              //@synthesize configurationHandler=_configurationHandler - In the implementation block
+(id)registrationWithCellClass:(Class)arg1 configurationHandler:(/*^block*/id)arg2 ;
+(id)registrationWithCellNib:(id)arg1 configurationHandler:(/*^block*/id)arg2 ;
-(id)reuseIdentifier;
-(Class)cellClass;
-(id)configurationHandler;
-(BOOL)hasCellClass;
-(BOOL)hasCellNib;
-(UINib *)cellNib;
-(id)initWithCellClass:(Class)arg1 cellNib:(id)arg2 configurationHandler:(/*^block*/id)arg3 reuseIdentifier:(id)arg4 ;
@end

