/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFWebResource.h>

@class WFFileRepresentation;

@interface WFFileWebResource : WFWebResource {

	WFFileRepresentation* _file;

}

@property (nonatomic,readonly) WFFileRepresentation * file;              //@synthesize file=_file - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)MIMEType;
-(WFFileRepresentation *)file;
-(id)initWithFile:(id)arg1 ;
-(id)loadInWKWebView:(id)arg1 ;
@end

