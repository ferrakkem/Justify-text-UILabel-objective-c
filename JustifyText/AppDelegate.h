//
//  AppDelegate.h
//  JustifyText
//
//  Created by Ferrakkem Bhuiyan on 2/2/17.
//  Copyright © 2017 Ferrakkem Bhuiyan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

