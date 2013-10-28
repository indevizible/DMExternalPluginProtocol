//
//  DMExternalPluginProtocol.h
//  DMConnex
//
//  Created by Trash on 10/24/13.
//  Copyright (c) 2013 infostant. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DMExternalPluginProtocol <NSObject>
@optional
-(id)landingFordata:(NSDictionary *)__data whenPressOrder:(void(^)(void))__whenPressOrder;
@property (nonatomic,readonly) id userIdentifier;
@property (nonatomic,readonly) id featureIdentifier;
@property (nonatomic,readonly) NSURL *clientHost;
@end
